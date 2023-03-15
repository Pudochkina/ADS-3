// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int count = 0;
int mid = arr[size/2];
while (size >= 0) {
if (value > mid) {
arr == arr+mid+1;
size = size - mid - 1;
mid = arr[mid+1+size/2];
}
else if (value < mid) {
mid = arr[size/4];
size = size/2;
}
else if (value == mid) {
count++;
for (int i = 0; i < (size/2); i++){
if (value == arr[i]){
count++;
}
}
if (value == arr[size/2+1] && value == arr[size/2-1]){
count++;
}
if (value == arr[size/2+1] || value == arr[size/2-1]){
count++;
}
arr == arr+mid+1;
size = size - mid - 1;
mid = arr[mid+1+size/2];
if (value == arr[size/2+1]){
count++;
}
}
}
if (count > 0) {
return count;
}
else{
return 0;
}
}
