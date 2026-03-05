// Spiral Print
    int arr[4][5] = {{1,2,3,4,5}, {6,7,8,9,10}, {3,2,7,8,3}, {6,2,1,6,3}};
    int row = 4, col = 5;
    int topRow = 0, bottomRow = row-1, leftCol = 0, rightCol = col-1;
    // while(topRow<=bottomRow && leftCol<=rightCol){
    //     for(int i=leftCol;i<=rightCol;i++){
    //         cout << arr[topRow][i] << " ";
    //     }
    //     topRow++;
    //     for(int i=topRow;i<=bottomRow;i++){
    //         cout << arr[i][rightCol] << " ";
    //     }
    //     rightCol--;
    //     for(int i=rightCol;i>=leftCol;i--){
    //         cout << arr[bottomRow][i] << " ";
    //     }
    //     bottomRow--;
    //     for(int i=bottomRow;i>=topRow;i--){
    //         cout << arr[i][leftCol] << " ";
    //     }
    //     leftCol++;
    //     for(int i=leftCol;i<=rightCol;i++){
    //         cout << arr[topRow][i] << " ";
    //     }
    //     topRow++;
    //     for(int i=topRow;i<=bottomRow;i++){
    //         cout << arr[i][rightCol] << " ";
    //     }
    //     rightCol--;
    //     for(int i=rightCol;i>=leftCol;i--){
    //         cout << arr[bottomRow][i] << " ";
    //     }
    //     bottomRow--;
    // }