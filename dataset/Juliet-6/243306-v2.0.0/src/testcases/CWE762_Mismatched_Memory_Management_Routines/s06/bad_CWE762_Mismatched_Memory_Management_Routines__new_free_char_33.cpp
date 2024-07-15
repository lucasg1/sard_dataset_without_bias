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
<START>
        free(data);
<END>
    }
}
} 
