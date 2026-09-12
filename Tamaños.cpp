#include <iostream>  // For input/output operations
#include <iomanip> // For formatting output
#include <limits> //  For input validation
using namespace std;

// Conversion factors for length units (SI units)
const double m_to_mu = 1000000.0; // Conversion factor from meters to micrometers
const double m_to_nm = 1000000000.0; // Conversion factor from meters to nanometers
const double m_to_cm = 100.0; // Conversion factor from meters to centimeters
const double m_to_mm = 1000.0; // Conversion factor from meters to millimeters
const double m_to_km = 0.001; // Conversion factor from meters to kilometers

double conversionFactor;
string unitName;


// Function prototypes for length conversions
double metersToAnything(double meters, double conversionFactor){
    return meters * conversionFactor;
}


int main(){

    cout << "Conversor de Unidades de Longitud" << endl;
    cout << "Seleccione la unidad a la que desea convertir (1-5):" << endl;
    cout << "1. Micrómetros (μm)" << endl;
    cout << "2. Nanómetros (nm)" << endl;
    cout << "3. Centímetros (cm)" << endl;  
    cout << "4. Milímetros (mm)" << endl;
    cout << "5. Kilómetros (km)" << endl;
    int unitChoice;

    cin >> unitChoice;

    switch (unitChoice) { // Switch statement to determine the conversion factor based on user choice
    
    case 1: // Micrometers
        conversionFactor = m_to_mu;
        unitName = "μm";
        break;
    case 2: // Nanometers
        conversionFactor = m_to_nm;
        unitName = "nm";
        break;
    case 3: // Centimeters
        conversionFactor = m_to_cm;
        unitName = "cm";
        break;
    case 4: // Millimeters
        conversionFactor = m_to_mm;
        unitName = "mm";
        break;
    case 5: // Kilometers
        conversionFactor = m_to_km;
        unitName = "km";
        break;
    default:
        cout << "Invalid choice. Please select a valid option." << endl;
        
        return 0; // Exit the program if the choice is invalid
    }
    
    double meters; // Variable to store the input length in meters
    cout << "Ingrese la longitud en metros: "; // Prompt the user to enter the length in meters
    cin >> meters; // Read the input length in meters


    double result = metersToAnything(meters, conversionFactor); // Call the conversion function

    cout << "El resultado de la conversión es: " << result << " " << unitName << endl; // Display the conversion result

    return 0;
}