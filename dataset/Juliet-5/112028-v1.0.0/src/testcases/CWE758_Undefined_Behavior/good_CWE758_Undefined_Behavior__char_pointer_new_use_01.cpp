namespace NAMESPACE0
{
void FUN0()
{
    {
        char * data;
        data = "string";
        char * * pointer = new char *;
        *pointer = data; 
        {
            char * data = *pointer;
            printLine(data);
        }
        delete pointer;
    }
}
} 
