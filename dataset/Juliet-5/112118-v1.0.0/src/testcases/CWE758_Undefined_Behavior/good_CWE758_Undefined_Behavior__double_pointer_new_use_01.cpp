namespace NAMESPACE0
{
void FUN0()
{
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
}
} 
