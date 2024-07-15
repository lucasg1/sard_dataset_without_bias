namespace NAMESPACE0
{
void FUN0()
{
    int i,k;
    double * data;
    data = new double[10];
    for(i = 0; i < 1; i++)
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    for(k = 0; k < 1; k++)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
        delete [] data;
    }
}
void FUN1()
{
    int h,j;
    double * data;
    data = new double[10];
    for(h = 0; h < 1; h++)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
    }
    for(j = 0; j < 1; j++)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
        delete [] data;
    }
}
} 
