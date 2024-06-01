#include <iostream>
#include <fstream>
#include <string> 

using namespace std;
const int MAX_DESTINATIONS = 10;
struct Date {
    int day;
    int month;
    int year;
};
struct Destination {
    string name;
    double cost;
    double rating;
};
void newJourney() {
    Destination dest;
    Date departureDate;
    int numDestinations = 0;
    cout << "Enter departure date (dd-mm-yyyy): ";
    cin >> departureDate.day >> departureDate.month >> departureDate.year;
}

void place_recommend_Riyadh(double price_range) {
    if (price_range == 1) {
        cout << "Hotels in Riyadh within 500 SAR - 1000 SAR per night:\n";
        cout << "1- Holiday Inn Hotel, price per night is 600 SAR" << endl;
        cout << "2- Crystal venues, price per night: 470 SAR" << endl;
        cout << "3- Brera, price per night is 900 SAR" << endl;
        cout << "4- La Perla Hotel, price per night is 580 SAR" << endl;
    } else if (price_range == 2) {
        cout << "Hotels in Riyadh within 1000 SAR - 1500 SAR per night:\n";
        cout << "1- Radisson Blu Hotel, price per night is 1000 SAR" << endl;
        cout << "2- Ritz Carlton Hotel, price per night is 1400 SAR" << endl;
    } else {
        cout << "Sorry, Invalid price range for Riyadh" << endl;
    }
}

void place_recommend_AlKhobar(double price_range) {
    if (price_range == 1) {
        cout << "Hotels in Al-Khobar within 500 SAR - 1000 SAR per night:\n";
        cout << "1- Holiday Inn Al Khobar, price per night is 530 SAR" << endl;
        cout << "2- Sofitel Al Khobar Corniche Hotel, price per night is 540 SAR" << endl;
        cout << "3- InterContinental Al Khobar Hotel, price per night is 660 SAR" << endl;
        cout << "4- Le Meridien Al Khobar Hotel, price per night is 720 SAR" << endl;
        cout << "5- Kempinski Al Othman Hotel, price per night is 800 SAR" << endl;
    } else if (price_range == 2) {
        cout << "Hotels in Al-Khobar within 1000 SAR - 1500 SAR per night:\n";
        cout << "1- Foco Al Khobar Hotel, price per night is 1100 SAR" << endl;
        cout << "2- Grand Hyatt Al Khobar Hotel, price per night is 1130 SAR" << endl;
    } else {
        cout << "Sorry, Invalid price range for Al Khobar" << endl;
    }
}

void place_recommend_Jeddah(double price_range) {
    if (price_range == 1) {
        cout << "1- Le Meridien Jeddah Hotel, price per night: 540 SAR" << endl;
        cout << "2- Sheraton Jeddah Hotel, price per night: 700 SAR" << endl;
        cout << "3- Radisson Blu Hotel, price per night is 760 SAR" << endl;
        cout << "4- Galleria Jeddah Hotel, price per night is 820 SAR" << endl;
        cout << "5- Movenpick Hotel, price per night is 880 SAR" << endl;
    } else if (price_range == 2) {
        cout << "1- Original Hotel, price per night is 1000 SAR" << endl;
        cout << "2- Jeddah Hilton Hotel, price per night is 1160 SAR" << endl;
        cout << "3- Narcissus Jeddah Hotel, price per night: 1319 SAR" << endl;
    } else {
        cout << " sorry Invalid price range for Jeddah" << endl;
    }
}
void place_recommend_AlUla(double price_range) {
    if (price_range == 1) {
        cout << "1- Al-Ula deserts, price per night is 621 SAR" << endl;
        cout << "2- Shaden Resort, price per night is 810 SAR" << endl;
        cout << "3- Al-Ula countryside, price per night is 575 SAR" << endl;
    } else if (price_range == 2) {
        cout << "1- Habitas AlUla Hotel, price per night is 1500 SAR" << endl;
        cout << "2- Banyan Tree AlUla Hotel, price per night is 1300 SAR" << endl;
        cout << "3- Sunset Alula Hotel, price per night is 1200 SAR" << endl;
    } else {
        cout << " sorry Invalid price range for Al Ula" << endl;
    }
}

void place_recommend_Dubai(double price_range) {
    if (price_range == 1) {
        cout << "1- Four Points from Sheraton, price per night: 500 SAR" << endl;
        cout << "2- Jumeirah Al Khor, price per night is 500 SAR" << endl;
        cout << "3- Grand Plaza Movenpick Price per night: 620 SAR" << endl;
        cout << "4- Amwaj Rotana, price per night is 719 SAR" << endl;
        cout << "5- Sofitel Dubai Downtown Hotel, price per night: 780 SAR" << endl;
    } else if (price_range == 2) {
        cout << "1- W Dubai, price per night is 1000 SAR" << endl;
        cout << "2- Dubai Edition, price per night is 1113 SAR" << endl;
        cout << "3- Sofitel Dubai Palm Hotel, price per night is 1050 SAR" << endl;
        cout << "4- Raffles Dubai, price per night is 1170 SAR" << endl;
        cout << "5- The Ritz-Carlton, price per night: 1360 SAR" << endl;
    } else {
        cout << "sorry Invalid price range for Dubai" << endl;
    }
}

void place_recommend_Bahrain(double price_range) {
    if (price_range == 1) {
        cout << "1- Swiss Belresidences, price per night: 660 SAR" << endl;
        cout << "2- Downtown Rotana, price per night: 740 SAR" << endl;
        cout << "3- Majestic Arjaan, price per night: 850 SAR" << endl;
    } else if (price_range == 2) {
        cout << "1- Plus Admiral Suites, price per night: 1250 SAR" << endl;
        cout << "2- Conrad Bahrain Financial Harbor, price per night is 1790 SAR" << endl;
        cout << "3- Nordic Resort, price per night: 1980 SAR" << endl;
    } else {
        cout << "sorry Invalid price range for Bahrain" << endl;
    }
}
void place_recommend_Qatar(double price_range) {
    if (price_range == 1) {
        cout << "1- InterContinental Doha Hotel, price per night is 506 SAR" << endl;
        cout << "2- City Center Rotana, price per night: 540 SAR" << endl;
        cout << "3- W Doha, price per night is 630 SAR" << endl;
    } else if (price_range == 2) {
        cout << "1- St. Regis Doha, price per night is 1099 SAR" << endl;
        cout << "2- The Ritz-Carlton Hotel, price per night: 1540 SAR" << endl;
        cout << "3- Four Seasons, price per night: 1646 SAR" << endl;
    } else {
        cout << "sorry Invalid price range for Qatar" << endl;
    }
}
void place_recommend_Kuwait(double price_range) {
    if (price_range == 1) {
        cout << "1- Millennium Central, price per night: 555 SAR" << endl;
        cout << "2- Holiday Inn, price per night: 694 SAR" << endl;
        cout << "3- Radisson Blu, price per night: 820 SAR" << endl;
        cout << "4- Hyatt Regency, price per night: 830 SAR" << endl;
    } else if (price_range == 2) {
        cout << "1- Hilton Resort, price per night is 1010 SAR" << endl;
        cout << "2- Regency, price per night: 1230 SAR" << endl;
        cout << "3- Grand Hyatt, price per night: 1280 SAR" << endl;
        cout << "4- Marina Hotel, price per night: 1320 SAR" << endl;
    } else {
        cout << "sorry Invalid price range for Kuwait" << endl;
    }
}

int calaulateTripCost(int x, int y){
	return x*y ;
}
void newJourney1(ofstream&outFile){
	string trip_type;
    cout << "please Choose the trip type:\n";
    cout << "1- Domestic flight\n";
    cout << "2- International flight\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> trip_type;
    if(trip_type=="1"){
        outFile<<"\n Your Trip :Domestic flight."<<trip_type;
	}
	if(trip_type=="2"){
        outFile<<"\n Your Trip :International flight"<<trip_type;
	}
	string city;
    if (trip_type == "1") {
        cout << "please Choose destination:\n";
        cout << "1- Riyadh\n";
        cout << "2- Al-Khobar\n";
        cout << "3- Jeddah\n";
        cout << "4- Al-Ula\n";
        cout << "Enter your choice (1, 2, 3, or 4): ";
        cin >> city;
        double price_range;
        cout << "Choose price range per night:\n";
        cout << "1- 1000SAR-3000SAR\n";
        cout << "2- 4000SAR-7000SAR\n";
        cout << "Enter your choice (1 or 2): ";
        cin >> price_range;
        if (city == "1") {
            outFile<<"\n Your destination is :Riyadh"<<city;
            place_recommend_Riyadh(price_range);
            int hotel_numper;
            cout << "Enter the number of the hotel you want to choose: ";
            cin >> hotel_numper;
        } else if (city == "2") {
            outFile<<"\n Your destination is :AlKhobar"<<city;
            place_recommend_AlKhobar(price_range);
            int hotel_numper;
            cout << "Enter the number of the hotel you want to choose: ";
            cin >> hotel_numper;
        } else if (city == "3") {
            outFile<<"\n Your destination is :Jeddah"<<city;
            place_recommend_Jeddah(price_range);
            int hotel_numper;
            cout << "Enter the number of the hotel you want to choose: ";
               cin >> hotel_numper;
        } else if (city == "4") {
            outFile<<"\n Your destination is :AlUla"<<city;
            place_recommend_AlUla(price_range);
            int hotel_numper;
            cout << "Enter the number of the hotel you want to choose: ";
            cin >> hotel_numper;
        } else {
            cout << "sorry Invalid location" << endl;
        }
    } 
	else if (trip_type == "2") {
        cout << "please Choose destination:\n";
        cout << "1- Dubai\n";
        cout << "2- Bahrain\n";
        cout << "3- Qatar\n";
        cout << "4- Kuwait\n";
        cout << "Enter your choice (1, 2, 3, or 4): ";
        cin >> city;

        double price_range;
        cout << "Choose price range per night:\n";
        cout << "1- 1000SAR-3000SAR\n";
        cout << "2- 4000SAR-7000SAR\n";
        cout << "Enter your choice (1 or 2): ";
        cin >> price_range;

        if(city == "1") {
            outFile<<"\n Your destination is :Dubai"<<city;
            place_recommend_Dubai(price_range);
            int hotel_numper;
            cout << "Enter the number of the hotel you want to choose: ";
            cin >> hotel_numper;
        } else if (city == "2") {
            outFile<<"\n Your destination is :Bahrain"<<city;
            place_recommend_Bahrain(price_range);
            int hotel_numper;
            cout << "Enter the number of the hotel you want to choose: ";
            cin >> hotel_numper;
        } else if (city == "3") {
            outFile<<"\n Your destination is :Qatar"<<city;
            place_recommend_Qatar(price_range);
            int hotel_numper;
            cout << "Enter the number of the hotel you want to choose: ";
            cin >> hotel_numper;
        } else if (city == "4") {
            outFile<<"\n Your destination is :Kuwait"<<city;
            place_recommend_Kuwait(price_range);
            int hotel_numper;
            cout << "Enter the number of the hotel you want to choose: ";
            cin >> hotel_numper;
        } else {
               cout << "sorry Invalid location" << endl;
        }
    } else {
        cout << "sorry Invalid trip type" << endl;
    }
}

void deleteTrip(Destination itinerary[], int& numDestinations) {
    int choice;
    cout << "Enter the number of the destination you want to delete: ";
    cin >> choice;
    
    for (int i = choice - 1; i < numDestinations - 1; ++i) {
        itinerary[i] = itinerary[i + 1];
    }
    --numDestinations;
    cout << "Destination deleted successfully." << endl;
}

void rateTrip(Destination itinerary[], int numDestinations, ofstream& appFile) {
    cout << "Rate your trip:" << endl;
    cout << "Destinations:" << endl;
    for (int i = 0; i < numDestinations; ++i) {
        cout << i + 1 << ". " << itinerary[i].name << endl;

        double rating;
        cout << "Enter your rating for " << itinerary[i].name << " (out of 5): ";
        cin >> rating;

        itinerary[i].rating = rating;

        appFile << "Destination: " << itinerary[i].name << ", Rating: " << rating << endl;
    }

    cout << "Thank you for rating your trip!" << endl;
}
void sortItineraryByRating(Destination itinerary[], int numDestinations, ofstream& appFile) {
    for (int i = 0; i < numDestinations - 1; ++i) {
        for (int j = 0; j < numDestinations - i - 1; ++j) {
            if (itinerary[j].rating < itinerary[j + 1].rating) {
                Destination temp = itinerary[j];
                itinerary[j] = itinerary[j + 1];
                itinerary[j + 1] = temp;
            }
        }
    }

    appFile << "Itinerary sorted by rating:" << endl;
    for (int i = 0; i < numDestinations; ++i) {
        appFile << i + 1 << ". " << itinerary[i].name << " - Rating: " << itinerary[i].rating << endl;
    }
}

int main() {
    int choice,num_day,hotel_choice,numDestinations = 0;  
    Destination itinerary[MAX_DESTINATIONS];
    char answer;
    int hotel_price;
    double price_range;
    int calaulate;
    string trip_type;
    string city;
    ifstream inFile;
    ofstream outFile;
    ofstream appFile;
    system("color F1");
    cout << "\n Welcome to Journey.";
    cout << "\n ________________________________________";
    cout << "  ^    " << endl;
    cout << " / \\ " << endl;
    cout << "/___\\ " << endl;
    cout << "|===|" << endl;
    cout << "| J |" << endl;
    cout << "| O |" << endl;
    cout << "| U |" << endl;
    cout << "| R |" << endl;
    cout << "| N |" << endl;
    cout << "| E |" << endl;
    cout << "| Y |" << endl;
    cout << "|===|" << endl;
    cout << " \\ /" << endl;
    cout << "  v" << endl;
    outFile.open("C:/Users/96654/Desktop/Project C/outFile.txt");
    appFile.open("C:/Users/96654/Desktop/Project C/outFile.txt");
    do {
        cout << "\n Choose what you want to do:"
             "\n 1.New journey."
             "\n 2.Add another trip."
			 "\n 3.Delete trip";
        cout << "\n Enter the number of your choice:";
        cin >> choice;

        switch(choice) {
            case 1:{
                cout << "New journey:";
                newJourney();
    	        newJourney1(outFile);
                cout<<"\n Enter number of day :";
                cin>> num_day;   
			    outFile<<"\n The duration of your trip is: " << num_day;
			    cout<<"(Please Write The Price of The Hotel You Chose.)";
                cout<<"Enter the hotel price :";
                cin>>hotel_price;
                calaulate=calaulateTripCost(num_day,hotel_price);
				cout<<"\n Calaulate ="<<calaulate;
				outFile<<"\n The Calaulate: " <<calaulate;
				 rateTrip(itinerary, numDestinations, appFile);
                sortItineraryByRating(itinerary, numDestinations, appFile);
				break;
			}

            case 2:{
            	cout<<"Add another trip.";
    	        newJourney1(outFile);
                cout<<"Enter number of day :";
                cin>> num_day;
			    inFile>> num_day;
			    outFile<<"\n The duration of your trip is: " << num_day; 
				cout<<"(Please Write The Price of The Hotel You Chose.)";  
                cout<<"Enter the hotal price :";
                cin>>hotel_price;
                int calculate=calaulateTripCost(num_day,hotel_price);
                cout<<"\n Calaulate ="<<calaulate;
			    outFile<<"\n The Calaulate: " <<calaulate;
			     rateTrip(itinerary, numDestinations, appFile);
                sortItineraryByRating(itinerary, numDestinations, appFile);
        
			}break;
            	
                
            case 3:{
            	deleteTrip(itinerary,numDestinations) ;
			}	break;
			
}
        cout << "\n Do you want to do something else? (Y/N):";
        cin >> answer;
    } while(answer == 'Y' || answer == 'y');
    cout<<"\n Think you for uising Journry see you later :)";
    outFile<<"\n Think you for uising Journry see you later :) " ;
    inFile.close();
    outFile.close();
    return 0;
}
