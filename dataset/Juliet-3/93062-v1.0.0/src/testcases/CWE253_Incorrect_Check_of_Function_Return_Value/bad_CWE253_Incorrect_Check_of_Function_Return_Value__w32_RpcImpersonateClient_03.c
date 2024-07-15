void FUN0()
{
    if(5==5)
    {
<START>
        if (RpcImpersonateClient(0) == RPC_S_OK)
<END>
        {
            exit(1);
        }
    }
}
