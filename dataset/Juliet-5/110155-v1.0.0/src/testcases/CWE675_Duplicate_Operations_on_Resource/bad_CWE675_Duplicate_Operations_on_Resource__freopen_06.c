static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    FILE * data;
    data = NULL; 
    if(STATIC_CONST_FIVE==5)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        fclose(data);
<END>
    }
}
