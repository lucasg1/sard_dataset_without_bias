namespace NAMESPACE0
{
void FUN0()
{
    int count;
    int &countRef = count;
    count = -1;
    fscanf(stdin, "%d", &count);
    {
        int count = countRef;
        {
            size_t i = 0;
<START>
            for (i = 0; i < (size_t)count; i++)
<END>
            {
                printLine("Hello");
            }
        }
    }
}
} 
