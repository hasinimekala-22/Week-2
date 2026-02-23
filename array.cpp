int n;
   int i;
    
    cout << "Enter no.of elements:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements:" << endl;
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Array elements are :" << endl;
    for(i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;

}