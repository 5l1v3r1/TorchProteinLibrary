int Coords2Volume_forward(  THCudaTensor *gpu_plain_coords, THCudaIntTensor *gpu_offsets, THCudaIntTensor *gpu_num_coords_of_type, THCudaTensor *gpu_volume, int num_types, int box_size, float resolution );