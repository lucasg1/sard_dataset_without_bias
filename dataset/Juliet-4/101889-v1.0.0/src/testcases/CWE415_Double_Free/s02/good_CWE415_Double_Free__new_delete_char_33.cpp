namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    data = new char;
    {
        char * data = dataRef;
        delete data;
    }
}
void FUN1()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    data = new char;
    delete data;
    {
        char * data = dataRef;
        ; 
    }
}
} 
