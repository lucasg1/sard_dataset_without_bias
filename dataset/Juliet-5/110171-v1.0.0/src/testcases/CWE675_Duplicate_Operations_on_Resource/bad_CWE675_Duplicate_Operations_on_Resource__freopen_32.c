void FUN0()
{
    FILE * data;
    FILE * *dataPtr1 = &data;
    FILE * *dataPtr2 = &data;
    data = NULL; 
    {
        FILE * data = *dataPtr1;
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
        *dataPtr1 = data;
    }
    {
        FILE * data = *dataPtr2;
<START>
        fclose(data);
<END>
    }
}
