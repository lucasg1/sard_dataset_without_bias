namespace NAMESPACE0
{
void FUN0()
{
    while(1)
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
        break;
    }
}
} 
