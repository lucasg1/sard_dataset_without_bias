namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL;
    {
        char * data = *dataPtr1;
        char VAR1;
        data = &VAR1;
        *data = 'A';
        printHexCharLine(*data);
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        ; 
    }
}
void FUN1()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL;
    {
        char * data = *dataPtr1;
        data = new char;
        *data = 'A';
        printHexCharLine(*data);
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        delete data;
    }
}
} 
