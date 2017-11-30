#include <iostream>
using namespace std;


//Global Variables
/* These variables are declared here becuase functions cannot access variable
declared in the main function */
    char ans_9a;
    char ans_9b;
    char ans_9c;

// Functions

void header(){
    system("clear");
    cout << "\t";
  
    cout << endl;
    cout << "\t Survey on Water, Sanitation and Hygiene (WaSH)";
    cout << endl;
    cout << endl;

}
void q12_1(){
    cout << endl;
    cout << " Question 12.1 " << endl;
    cout << "\t A"  << endl;
    cout << "\t B" << endl;
    cout << "\t C" << endl;
    cout << "\t D" << endl; 
    cout << "\t E" << endl;
    
    cout << "Response: ";
    cin >> ans_9a;
}

void q12_2(){
    cout << endl;
    cout << " Question 12.2"  << endl;
    cout << "\t A. " << endl;
    cout << "\t B. " << endl;
    cout << "\t C. "  << endl;
    cout << "Response: ";
    cin >> ans_9b;
}

void q12_3(){
    cout << " QUestion 12.3" << endl;
    cout << "\t A"  << endl;
    cout << "\t B" << endl;
    cout << "\t C" << endl;
    cout << "\t D" << endl;
    cout << "\t E" << endl;
    
    cout << "Response: ";
    cin >> ans_9c;
}

int main(){
    // Variable Declarations
    char ans_1[32];
    char ans_2;
    char ans_3[255];
    int ans_4;
    int ans_5;
    int ans_6;
    int ans_7;
    int ans_8;
    char ans_9;
    char ans_13;
    char ans_14;


    header(); // Call the header function

    // Question 1
    cout << " Person interviewed (Gender) Male or Female: ";
    cin >> ans_1;
    // Question 2
    cout << endl;
    cout << " Age Range";
    cout << endl << endl;
    cout << "\t A. Under 18"  << endl;
    cout << "\t B. 18 - 65"  << endl;
    cout << "\t C. Over 65"  << endl;
    cout << endl;
    cout << " Response: ";
    cin >> ans_2;
    // Question 3
   
    cout << " Position in household (head/daughter etc.): ";
    cin >> ans_3;
    // Question 4;
   
    cout << " The household consist of how many members? ";
    cin >> ans_4;
    // Question 5
    
    cout << " Number of young children in household (aged less than 5 years old)?: ";
    cin >> ans_5;
    // Question 6
 
    cout << "How many people in the household (aged more than 60 years old)? ";
    cin >> ans_6;
    // Question 7

    cout << "How many females in household? ";
    cin >> ans_7;
    // Question 8

    cout << "How many males in household? ";
    cin >> ans_8;

    // Water Source

    // Question 9
    cout << "What is the main source of drinking-water for members of your household? " << endl << endl;
    cout << "\t A. Piped water into dwelling" << endl;
    cout << "\t B. " << endl;
    cout << "\t C. " << endl;
    cout << "\t D. " << endl;
    cout << "\t E. " << endl;
    cout << "\t F. " << endl;
    cout << endl;
    cout << " Response: ";
    cin >> ans_9;
    // if a go to 12.2-12.3
    if(ans_9 == 'A' || ans_9 == 'a'){
        q12_2();
        q12_3();
    }
     if(ans_9 == 'B' || ans_9 == 'b'){
        q12_2();
        q12_3();
    }
     if(ans_9 == 'C' || ans_9 == 'c'){
      
        q12_3();
    }
     if(ans_9 == 'D' || ans_9 == 'd'){
        q12_1();
    }
     if(ans_9 == 'E' || ans_9 == 'e'){
        q12_1();  
    }
     if(ans_9 == 'F' || ans_9 == 'f'){
        q12_1();
    }
    // Qusetion 13
    cout << endl;
    cout << " Question 13" << endl << endl;
    cout << " \t A." << endl;
    cout << " \t B." << endl;
    cout << " \t C." << endl;   
    cout << endl;
    cout << "Response: ";
    cin >> ans_13;
    
    //Question 14
    return 0;
}

