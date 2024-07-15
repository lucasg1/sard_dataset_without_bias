namespace NAMESPACE0
{
void FUN0()
{
    int count;
    int &countRef = count;
    count = -1;
    count = 20;
    {
        int count = countRef;
        {
            size_t i = 0;
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
    }
}
void FUN1()
{
    int count;
    int &countRef = count;
    count = -1;
    fscanf(stdin, "%d", &count);
    {
        int count = countRef;
        {
            size_t i = 0;
            if (count > 0 && count <= 20)
            {
                for (i = 0; i < (size_t)count; i++)
                {
                    printLine("Hello");
                }
            }
        }
    }
}
} 
