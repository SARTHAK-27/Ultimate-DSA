int Solution::solve(int row, int column)
{
    // Count top left squares
    int topLeft = min(row, column) - 1;
    // Count top right squares
    int topRight = min(row, 9 - column) - 1;

    // Count bottom left squares
    int bottomLeft = 8 - max(row, 9 - column);
    // Count bottom right squares
    int bottomRight = 8 - max(row, column);

    // Return total count
    return (topLeft + topRight + bottomRight + bottomLeft);
}
