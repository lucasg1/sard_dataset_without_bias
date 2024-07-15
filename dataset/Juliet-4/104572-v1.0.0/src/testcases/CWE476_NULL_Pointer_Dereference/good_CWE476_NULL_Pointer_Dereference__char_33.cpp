namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = "Good";
    {
        char * data = dataRef;
        printHexCharLine(data[0]);
    }
}
void FUN1()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    {
        char * data = dataRef;
        if (data != NULL)
        {
            printHexCharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
} 
