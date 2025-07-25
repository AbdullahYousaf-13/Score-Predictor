#include <iostream>

using namespace std;

// Function to predict the score using linear regression
double predictScore(double overs_bowled, double wickets_lost) {
    // Hypothetical coefficients based on historical data fitting
    double intercept = 50.0;  // Intercept (base score when overs and wickets are zero)
    double coeff_overs = 8.0;  // Coefficient for overs bowled
    double coeff_wickets = -5.0; // Coefficient for wickets lost

    // Calculate the predicted score
    double predicted_score = intercept + (coeff_overs * overs_bowled) + (coeff_wickets * wickets_lost);

    // Ensure the score is not negative
    if (predicted_score < 0) {
        predicted_score = 0;
    }

    return predicted_score;
}

int main() {
    double overs_bowled;
    double wickets_lost;

    cout << "Enter overs bowled: ";
    cin >> overs_bowled;

    cout << "Enter wickets lost: ";
    cin >> wickets_lost;

    // Ensure valid input
    if (overs_bowled < 0 || overs_bowled > 50) {
        cout << "Invalid number of overs. Please enter a value between 0 and 50." << endl;
        return 1;
    }

    if (wickets_lost < 0 || wickets_lost > 10) {
        cout << "Invalid number of wickets. Please enter a value between 0 and 10." << endl;
        return 1;
    }

    double predicted_score = predictScore(overs_bowled, wickets_lost);

    cout << "Predicted Score after " << overs_bowled << " overs and " << wickets_lost << " wickets lost: " << predicted_score << endl;

    return 0;
}
