# Score-Predictor

## Project Description: 

This C++ program predicts a cricket team's score based on two key match parameters:

- Overs Bowled (0–50)

- Wickets Lost (0–10)

## Key Features:

- **Linear Regression Model:** Uses a simple equation:

  Predicted Score = 50.0 + (8.0 × Overs Bowled) - (5.0 × Wickets Lost)

  - 50.0: Base score (intercept).

  - 8.0: Positive impact of each over bowled.

  - -5.0: Negative impact of each wicket lost.

- **Input Validation:** Ensures overs (0–50) and wickets (0–10) are within realistic ranges.

- **Non-Negative Constraint:** Caps predicted scores at 0 if the formula yields a negative value.

## Example Use Case:

Input: Overs = 30, Wickets = 5 → Output: Predicted Score = 240

50 + (8 × 30) - (5 × 5) = 50 + 240 - 25 = 265

## Potential Applications:

- **Fan Tools:** Estimate live match scores.

- **Strategy Analysis:** Compare predicted vs. actual scores to evaluate team performance.

- **Limitation:** Uses fixed coefficients; real-world models would train on historical data for accuracy.

---
