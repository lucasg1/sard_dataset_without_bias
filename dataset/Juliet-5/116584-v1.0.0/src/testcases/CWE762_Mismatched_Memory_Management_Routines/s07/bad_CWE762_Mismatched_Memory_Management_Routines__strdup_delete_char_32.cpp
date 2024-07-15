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
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
<START>
        delete data;
<END>
    }
}
} 
