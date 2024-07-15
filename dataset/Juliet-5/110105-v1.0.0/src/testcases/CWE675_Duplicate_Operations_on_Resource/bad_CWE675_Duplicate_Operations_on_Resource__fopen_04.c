static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    FILE * data;
    data = NULL; 
    if(STATIC_CONST_TRUE)
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
    }
    if(STATIC_CONST_TRUE)
    {
<START>
        fclose(data);
<END>
    }
}
