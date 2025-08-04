#include <iostream>
using namespace std;
int countSteps(int A, int B)
{
    int total = 0;

    total += min(8 - A, 8 - B);
    total += min(8 - A, B - 1);
    total += min(A - 1, B - 1);
    total += min(A - 1, 8 - B);

    return total;
}
int main()
{
    // Bishop
    // Total Moves for Bishop(It only moves diagonally)
    int x, y;
    cout << "Enter starting points of bishop(should be <=8 for both rows and cols): ";
    cin >> x >> y;
    cout << "The total steps the bishop can move in 8X8: " << countSteps(x, y) << endl;
    return 0;
}
