namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * dataBuffer = new char;
            *dataBuffer = 'A';
            data = dataBuffer;
        }
    }
    printHexCharLine(*data);
    delete data;
}
void FUN1()
{
    char * data;
    data = NULL; 
    if(globalFive==5)
    {
        {
            char * dataBuffer = new char;
            *dataBuffer = 'A';
            data = dataBuffer;
        }
    }
    printHexCharLine(*data);
    delete data;
}
} 
