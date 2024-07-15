void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * *dataPtr1 = &data;
    twoIntsStruct * *dataPtr2 = &data;
    data = NULL; 
    {
        twoIntsStruct * data = *dataPtr1;
        data = (twoIntsStruct *)realloc(data, 1*sizeof(twoIntsStruct));
        *dataPtr1 = data;
    }
    {
        twoIntsStruct * data = *dataPtr2;
        if (data != NULL)
        {
            data[0].intOne = 1;
            data[0].intTwo = 1;
            printStructLine(&data[0]);
            free(data);
        }
    }
}
