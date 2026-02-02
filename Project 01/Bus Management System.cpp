#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

// --- PROJECT GLOBAL SETTINGS ---

const int TOTAL_SEATS = 50;      // Project Scale: 50 seats per bus
const int MAX_PASSENGERS = 500;  // Large database for records
const int TOTAL_BUSES = 15;      // Expanded fleet records

// Parallel Arrays for Comprehensive Database

string passengerNames[MAX_PASSENGERS];
int passengerAges[MAX_PASSENGERS];
int passengerSeats[MAX_PASSENGERS];
string passengerRoutes[MAX_PASSENGERS];
string passengerCategories[MAX_PASSENGERS];
string passengerClasses[MAX_PASSENGERS];
double passengerFares[MAX_PASSENGERS];
string passengerDates[MAX_PASSENGERS];
bool paymentStatus[MAX_PASSENGERS]; // true = Paid, false = Pending

// System State Variables

bool seatStatus[TOTAL_SEATS]; 
int currentRecordCount = 0;
double totalEarnings = 0.0;

// --- FUNCTION PROTOTYPES (Structuring the Project) ---

void printMainHeading();
void startPassengerPortal();
void startAdminPortal();
bool checkAdminCredentials();
void performMultiSeatBooking();
void showPassengerRecords();
void searchPassengerBySeat();
void viewBusConditionReport();
void showDetailedRouteList();
void displaySeatLayout();
void updatePaymentManual(); // Admin feature to clear dues
double getPriceForRoute(int routeChoice);
string getRouteName(int choice);
void generateReceipt(int startIndex, int count);

// --- MAIN SYSTEM ENTRY POINT ---

int main() {
    // Initialize seats as available at system boot
    
    for (int i = 0; i < TOTAL_SEATS; i++) {
        seatStatus[i] = false;
    }

  int portalChoice = 0;

do {
    // Print menu
    printMainHeading();
    cout << "\n\t\t[ SYSTEM PORTAL SELECTION ]";
    cout << "\n\t1. PASSENGER PORTAL (Self-Service Booking)";
    cout << "\n\t2. ADMIN PORTAL (Management & Staff Login)";
    cout << "\n\t3. SHUT DOWN SYSTEM";
    cout << "\n\tEnter Your Choice: ";
    cin >> portalChoice;

    // Check user choice
    if (portalChoice == 1) 
	{
        startPassengerPortal();
    } 
    else if (portalChoice == 2) 
	{
        if (checkAdminCredentials())
	{
            startAdminPortal();
    }
    } 
    else if (portalChoice == 3) 
	{
        cout << "\n\tSystem shutting down... All records saved to memory." << endl;
    } 
    else { 
        // Wrong input
        cout << "\n\t[!] Invalid choice! Please enter 1, 2, or 3.\n";
    }

} while (portalChoice != 3);


    //cout << "\n\tSystem shutting down... All records saved to memory." << endl;
    return 0;
}

// --- SECURITY MODULE ---

bool checkAdminCredentials() {
    string username, password;
    cout << "\n\t--- SECURE STAFF LOGIN ---";
    cout << "\n\tUsername : "; cin >> username;
    cout << "\n\tPassword : "; cin >> password;

    if (username == "admin" && password == "2025se05") {
        cout << "\n\t[+] Access Granted. Loading Dashboard..." << endl;
        return true;
    } else {
        cout << "\n\t[!] Access Denied. Unauthorized entry attempt logged." << endl;
        return false;
    }
}

// --- PASSENGER PORTAL MODULE ---

void startPassengerPortal() {
    int choice;
    do {
        cout << "\n\t=======================================";
        cout << "\n\t       PASSENGER SELF-SERVICE";
        cout << "\n\t=======================================";
        cout << "\n\t1. View Routes & Detailed Fare List";
        cout << "\n\t2. Book Tickets (Multi-Seat Selection)";
        cout << "\n\t3. Return to Main Menu";
        cout << "\n\tEnter Choice: ";
        cin >> choice;

        if (choice == 1){showDetailedRouteList();}
        
        else if (choice == 2){performMultiSeatBooking();}
        
    } while (choice != 3);
}

// --- ADVANCED BOOKING & PAYMENT FEATURE ---

void performMultiSeatBooking()
 {
    int seatsToBook, rChoice;
    showDetailedRouteList();
    cout << "\n\tSelect Your Destination Route (1-15): ";
    cin >> rChoice;

    if (rChoice < 1 || rChoice > 15) {
        cout << "\t[!] Invalid Route Selection." << endl;
        return;
    }

    displaySeatLayout();
    cout << "\n\tHow many seats would you like to book at once? ";
    cin >> seatsToBook;

    if (currentRecordCount + seatsToBook > MAX_PASSENGERS) {
        cout << "\n\t[!] Database Limit Exceeded!" << endl;
        return;
    }

    string travelDate;
    cout << "\tEnter Preferred Date of Travel (DD-MM-YYYY): ";
    cin >> travelDate;

    int startIndex = currentRecordCount;

    for (int i = 0; i < seatsToBook; i++)
	 {
        cout << "\n\t--- Details for Seat Selection " << (i + 1) << " ---" << endl;
        
        int sNum;
        cout << "\tEnter Seat Number (1-50): ";
        cin >> sNum;

        if (sNum < 1 || sNum > 50 || seatStatus[sNum - 1]) {
            cout << "\t[!] Seat " << sNum << " is unavailable. Skipping this seat." << endl;
            i--; // Repeat the loop for this seat
            continue;
        }

        cin.ignore(100, '\n'); // Project Fix: Buffer clearance for space-separated names
        cout << "\tPassenger Full Name: ";
        getline(cin, passengerNames[currentRecordCount]);
        
        cout << "\tPassenger Age: ";
        cin >> passengerAges[currentRecordCount];

        cout << "\tPassenger Category (1.Standard 2.Couple 3.Old Aged): ";
        int catChoice; 
		cin >> catChoice;
        
        cout << "\tTravel Class (1.Economy 2.Business): ";
        int classChoice; 
		cin >> classChoice;

        // Pricing Logic (Operators)
        double price = getPriceForRoute(rChoice);
        if (classChoice == 2) price *= 1.40; // Business class is 40% extra
        if (catChoice == 3) price *= 0.85;  // Seniors get 15% discount

        cout << "\tCalculated Charge: Rs. " << price << endl;
        cout << "\tProceed to Payment? (1 for Yes / 0 for Pay Later): ";
        int payNow; cin >> payNow;
        paymentStatus[currentRecordCount] = (payNow == 1);

        // Saving Data to Project Database
        
        passengerSeats[currentRecordCount] = sNum;
        passengerDates[currentRecordCount] = travelDate;
        passengerRoutes[currentRecordCount] = getRouteName(rChoice);
        passengerFares[currentRecordCount] = price;
        passengerClasses[currentRecordCount] = (classChoice == 2) ? "Business" : "Economy";
        passengerCategories[currentRecordCount] = (catChoice == 2) ? "Couple" : (catChoice == 3 ? "Old Aged" : "Standard");
        
        seatStatus[sNum - 1] = true;
        totalEarnings += price;
        currentRecordCount++;
    }

    generateReceipt(startIndex, seatsToBook);
}

// --- ADMIN PORTAL MODULE ---

void startAdminPortal() {
    int choice;
    do {
        cout << "\n\t****************************************";
        cout << "\n\t       ADMINISTRATIVE DASHBOARD";
        cout << "\n\t****************************************";
        cout << "\n\t1. Display All Active Passenger Records";
        cout << "\n\t2. Search Detailed Profile by Seat Number";
        cout << "\n\t3. View 15-Bus Mechanical & Status Report";
        cout << "\n\t4. Manual Payment Collection (Clear Dues)";
        cout << "\n\t5. View Financial Earnings Summary";
        cout << "\n\t6. Logout from System";
        cout << "\n\tEnter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: showPassengerRecords(); break;
            case 2: searchPassengerBySeat(); break;
            case 3: viewBusConditionReport(); break;
            case 4: updatePaymentManual(); break;
            case 5: cout << "\n\t[REVENUE REPORT] Total System Earnings: Rs. " << totalEarnings << endl; break;
        }
    } while (choice != 6);
}

// --- ADMIN SEARCH: FULL RECORD DISPLAY ---

void searchPassengerBySeat() {
    int s; 
    cout << "\n\tEnter Seat Number to Retrieve Full Data: "; cin >> s;
    
    bool found = false;
    for(int i = 0; i < currentRecordCount; i++) {
        if(passengerSeats[i] == s) {
            found = true;
            cout << "\n\t---------------------------------------------";
            cout << "\n\t        PASSENGER PROFILE LOG";
             cout <<"\n\t---------------------------------------------";
            cout << "\n\tFull Name:      " << passengerNames[i];
            cout << "\n\tAge/Category:   " << passengerAges[i] << " | " << passengerCategories[i];
            cout << "\n\tTravel Route:   " << passengerRoutes[i];
            cout << "\n\tTravel Date:    " << passengerDates[i];
            cout << "\n\tClass Type:     " << passengerClasses[i];
            cout << "\n\tFare Charged:   Rs. " << passengerFares[i];
            cout << "\n\tPayment Status: " << (paymentStatus[i] ? "[ PAID ]" : "[ UNPAID/DUE ]");
             cout << "\n\t---------------------------------------------";
            break; 
        }
    }
    if(!found) cout << "\n\t[!] System Error: Seat " << s << " is currently vacant." << endl;
}

// --- MANUAL PAYMENT MODULE ---

void updatePaymentManual() {
    int s; 
    cout << "\n\tEnter Seat Number to Clear Payment: "; cin >> s;
    for(int i = 0; i < currentRecordCount; i++) {
        if(passengerSeats[i] == s) {
            if(paymentStatus[i])
			 {
                cout << "\t[!] This passenger has already paid." << endl;
            } else {
                paymentStatus[i] = true;
                cout << "\t[+] Payment of Rs. " << passengerFares[i] << " cleared successfully." << endl;
            }
            return;
        }
    }
    cout << "\t[!] Record not found." << endl;
}

// --- 15 BUS DETAILED FLEET RECORDS ---

void viewBusConditionReport() {
    cout << "\n\t" << left << setw(12) << "BUS ID" << setw(20) << "MECHANICAL HEALTH" << setw(16) << "AVAILABILITY" << "LATEST MAINTENANCE LOG" << endl;
    cout << "\t----------------------------------------------------------------------------\n";
    string cond[] = {"Excellent", "Good", "Repair Required", "Excellent", "Fair", "Brand New", "Good", "Excellent", "Fair", "Good", "Brand New", "Urgent Repair", "Good", "Excellent", "Fair"};
    string stat[] = {"On Road", "Standby", "In Workshop", "Ready", "On Road", "Ready", "On Road", "Ready", "Standby", "On Road", "Ready", "In Workshop", "Standby", "On Road", "Ready"};
    
    for(int i = 0; i < 15; i++) {
        cout << "\t" << "BUS-" << setfill('0') << setw(3) << (i+1) << setfill(' ') 
             << setw(6) << "" << setw(18) << cond[i] << setw(15) << stat[i] << "Mechanical Check No. " << (i + 400) << endl;
    }
}

// --- 15 COMPREHENSIVE ROUTES ---

void showDetailedRouteList() {
    cout << "\n\t--- OFFICIAL TRANSPORT ROUTE NETWORK ---" << endl;
    cout << "\t01. Lahore to Islamabad          - Rs. 1800" << endl;
    cout << "\t02. Karachi to Lahore            - Rs. 5500" << endl;
    cout << "\t03. Islamabad to Peshawar        - Rs. 1200" << endl;
    cout << "\t04. Multan to Faisalabad         - Rs. 1500" << endl;
    cout << "\t05. Quetta to Karachi            - Rs. 4000" << endl;
    cout << "\t06. Sialkot to Lahore            - Rs. 1000" << endl;
    cout << "\t07. Peshawar to Islamabad        - Rs. 1200" << endl;
    cout << "\t08. Rawalpindi to Multan         - Rs. 3500" << endl;
    cout << "\t09. Bahawalpur to Lahore         - Rs. 2800" << endl;
    cout << "\t10. Gujranwala to Islamabad      - Rs. 2000" << endl;
    cout << "\t11. Hyderabad to Karachi         - Rs. 1100" << endl;
    cout << "\t12. Sukkur to Multan             - Rs. 3200" << endl;
    cout << "\t13. Abbottabad to Lahore         - Rs. 2600" << endl;
    cout << "\t14. Rahim Yar Khan to Lahore     - Rs. 4400" << endl;
    cout << "\t15. Sargodha to Rawalpindi       - Rs. 1300" << endl;
}

string getRouteName(int choice) {
    string routes[] = {"", "Lahore to Islamabad", "Karachi to Lahore", "Islamabad to Peshawar", "Multan to Faisalabad", "Quetta to Karachi", "Sialkot to Lahore", "Peshawar to Islamabad", "Rawalpindi to Multan", "Bahawalpur to Lahore", "Gujranwala to Islamabad", "Hyderabad to Karachi", "Sukkur to Multan", "Abbottabad to Lahore", "Rahim Yar Khan to Lahore", "Sargodha to Rawalpindi"};
    return (choice >= 1 && choice <= 15) ? routes[choice] : "Unknown";
}

double getPriceForRoute(int choice) {
    double prices[] = {0, 1800, 5500, 1200, 1500, 4000, 1000, 1200, 3500, 2800, 2000, 1100, 3200, 2600, 4400, 1300};
    return (choice >= 1 && choice <= 15) ? prices[choice] : 500.0;
}

// --- DATABASE TRAVERSAL (Pointer Concepts) ---

void showPassengerRecords() {
    cout << "\n\t--- SYSTEM REGISTERED PASSENGER DATABASE ---" << endl;
    cout << left << setw(18) << "FULL NAME" << setw(6) << "SEAT" << setw(23) << "ROUTE" << setw(10) << "STATUS" << "FARE" << endl;
    cout << string(75, '-') << endl;

    for (int i = 0; i < currentRecordCount; i++) {
        cout << left << setw(18) << passengerNames[i] 
             << setw(6) << passengerSeats[i] 
             << setw(23) << passengerRoutes[i] 
             << setw(10) << (paymentStatus[i] ? "Paid" : "Unpaid")
             << "Rs. " << passengerFares[i] << endl;
    }
}

void generateReceipt(int start, int count) {
    cout << "\n\t########################################";
    cout << "\n\t        OFFICIAL TRANSACTION RECEIPT";
    cout << "\n\t########################################";
    for(int i = start; i < start + count; i++) {
        cout << "\n\tPassenger: " << passengerNames[i];
        cout << "\n\tSeat: " << passengerSeats[i] << " | Date: " << passengerDates[i];
        cout << "\n\tRoute: " << passengerRoutes[i];
        cout << "\n\tPayment: " << (paymentStatus[i] ? "CONFIRMED" : "DUE AT COUNTER");
        cout << "\n\tTotal Charge: Rs. " << passengerFares[i];
        cout << "\n\t" << string(45, '-');
    }
}

void displaySeatLayout() {
    cout << "\n\t--- 50-SEAT CONFIGURATION ([X] = Reserved) ---" << endl;
    for (int i = 0; i < TOTAL_SEATS; i++) {
        if (seatStatus[i]) cout << "\t[X]";
        else cout << "\t[" << (i + 1) << "]";
        if ((i + 1) % 5 == 0) cout << endl;
    }
}

void printMainHeading() {
    cout << "\n\n\t***********************************************";
    cout << "\n\t* NATIONAL BUS TRANSPORT MANAGEMENT SYSTEM  *";
    cout << "\n\t* FINAL SEMESTER PROJECT-ROLL NO:2025-SE-05 *";
    cout << "\n\t***********************************************" << endl;
}
