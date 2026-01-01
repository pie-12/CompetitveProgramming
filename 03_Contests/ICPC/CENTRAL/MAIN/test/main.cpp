#include <bits/stdc++.h>
using namespace std;


int weight[MAX_N], value[MAX_N];
map<int,bool> pickedItems;
int caiTui(int W, int wt[], int val[], int n, vector<int>& pickedItems)
{
    if (n == 0 || W == 0) return 0;
    if (wt[n - 1] > W)
        return caiTui(W, wt, val, n - 1, pickedItems);

    else {
        vector<int> tempItems = pickedItems; 
        int notPicked = caiTui(W, wt, val, n - 1, pickedItems);
        int picked = val[n - 1] + caiTui(W - wt[n - 1], wt, val, n - 1, tempItems);

        if (picked > notPicked) 
        {
            tempItems.push_back(n - 1);  
            pickedItems = tempItems;   
            return picked;
        } 
        else return notPicked;
    }
}

// Driver code
int main()
{
    int n, w, h; cin >> n >> w >> h;
    int profit[] = { 60, 100, 120 };
    int weight[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(profit) / sizeof(profit[0]);
    cout << sizeof(profit);
    vector<int> pickedItems;  // To store the indices of picked items
    int maxProfit = caiTui(W, weight, profit, n, pickedItems);
    
    cout << "Maximum profit: " << maxProfit << endl;
    cout << "Picked items (0-indexed): ";
    for (int i : pickedItems)
        cout << i << " ";
    cout << endl;

    return 0;
}
