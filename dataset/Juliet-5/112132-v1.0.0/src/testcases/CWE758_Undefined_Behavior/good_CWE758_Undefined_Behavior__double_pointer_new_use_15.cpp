namespace NAMESPACE0
{
void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        double * data;
        data = new double;
        *data = 5.0;
        double * * pointer = new double *;
        *pointer = data; 
        {
            double * data = *pointer;
            printDoubleLine(*data);
        }
        delete pointer;
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        double * data;
        data = new double;
        *data = 5.0;
        double * * pointer = new double *;
        *pointer = data; 
        {
            double * data = *pointer;
            printDoubleLine(*data);
        }
        delete pointer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
