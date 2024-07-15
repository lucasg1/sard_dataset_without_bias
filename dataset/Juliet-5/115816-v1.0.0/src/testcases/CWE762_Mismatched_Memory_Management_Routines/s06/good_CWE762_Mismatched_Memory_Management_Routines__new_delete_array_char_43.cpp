namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = new char[100];
}
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
    delete [] data;
}
void FUN2(char * &data)
{
    data = new char;
}
void FUN3()
{
    char * data;
    data = NULL;
    FUN2(data);
    delete data;
}
} 
