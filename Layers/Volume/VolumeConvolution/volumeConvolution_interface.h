void VolumeConvolution_forward(  THCudaTensor *volume1, THCudaTensor *volume2, THCudaTensor *output);
void VolumeConvolution_backward( THCudaTensor *gradOutput,THCudaTensor *gradVolume1,THCudaTensor *gradVolume2,THCudaTensor *volume1, THCudaTensor *volume2);