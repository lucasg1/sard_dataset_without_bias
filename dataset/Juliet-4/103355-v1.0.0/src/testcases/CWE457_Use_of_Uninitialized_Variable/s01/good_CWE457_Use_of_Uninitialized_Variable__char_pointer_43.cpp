namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = "string";
}
void FUN1()
{
    char * data;
    FUN0(data);
    printLine(data);
}
void FUN2(char * &data)
{
    ; 
}
void FUN3()
{
    char * data;
    FUN2(data);
    data = "string";
    printLine(data);
}
} 
