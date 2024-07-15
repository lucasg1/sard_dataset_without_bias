namespace NAMESPACE0
{
void FUN0()
{
    int i,k;
    char * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    for(k = 0; k < 1; k++)
    {
        ; 
    }
}
void FUN1()
{
    int h,j;
    char * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = new char;
        *data = 'A';
    }
    for(j = 0; j < 1; j++)
    {
        printHexCharLine(*data);
    }
}
} 
