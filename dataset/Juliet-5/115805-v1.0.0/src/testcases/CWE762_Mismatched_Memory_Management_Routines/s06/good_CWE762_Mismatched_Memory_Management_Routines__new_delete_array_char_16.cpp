namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = new char;
        break;
    }
    while(1)
    {
        delete data;
        break;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = new char[100];
        break;
    }
    while(1)
    {
        delete [] data;
        break;
    }
}
} 
