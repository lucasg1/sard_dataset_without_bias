namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    {
        int data = dataRef;
        if (data != -1)
        {
            CLOSE(data);
        }
        data = OPEN("GoodSink_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        if (data != -1)
        {
            CLOSE(data);
        }
    }
}
} 
