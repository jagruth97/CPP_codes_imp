int n = a & ~(a-1);

// n contains the position of the differenciating bit
// when xored or any num differs from other num by atleast 1 bit
// that 1 bit pos is saved in n