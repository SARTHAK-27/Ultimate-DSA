/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int numSetBits(unsigned int A)
{
    int count = 0;
    while (A)
    {
        A = A & (A - 1);
        count++;
    }
    return count;
}
