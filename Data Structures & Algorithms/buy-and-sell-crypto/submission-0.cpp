class Solution { // Define the Solution class required by the platform
public: // Make the function accessible from outside the class
    int maxProfit(vector<int>& prices) { // Function to return the maximum profit from one buy and one sell
        int minPrice = INT_MAX; // Store the smallest price seen so far
        int maxProfit = 0; // Store the best profit found so far

        for (int price : prices) { // Loop through each price in the array
            if (price < minPrice) { // Check if the current price is the lowest so far
                minPrice = price; // Update the minimum price
            } // End of minimum price update block

            int currentProfit = price - minPrice; // Calculate profit if we sell today after buying at minPrice

            if (currentProfit > maxProfit) { // Check if current profit is better than the best profit
                maxProfit = currentProfit; // Update the maximum profit
            } // End of max profit update block
        } // End of loop over prices

        return maxProfit; // Return the best profit found
    } // End of maxProfit function
}; // End of class Solution