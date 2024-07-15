void FUN0()
{
<START>
    if (RpcImpersonateClient(0) == RPC_S_OK)
<END>
    {
        exit(1);
    }
}
