namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = new char;
}
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
    delete data;
}
void FUN2(char * &data)
{
    data = new char;
    delete data;
}
void FUN3()
{
    char * data;
    data = NULL;
    FUN2(data);
    ; 
}
} 
