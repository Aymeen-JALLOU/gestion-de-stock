<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Stock Management System</title>
</head>
<body>
    <h1>Welcome to Stock Management System</h1>
    <p>This program allows users to manage a list of products, including adding, modifying, deleting, and displaying products.</p>
    <h2>User Information</h2>
    <p>Please enter your name:</p>
    <form action="">
        <label for="username">Name:</label>
        <input type="text" id="username" name="username">
        <button type="submit">Submit</button>
    </form>
    <h2>Main Menu</h2>
    <p>Choose one of the following options:</p>
    <ul>
        <li>Add Product</li>
        <li>Modify Product</li>
        <li>Delete Product</li>
        <li>Display Products</li>
        <li>Exit</li>
    </ul>
    <h2>Product Management</h2>
    <p>To add a product, enter its details:</p>
    <form action="">
        <label for="productName">Name:</label>
        <input type="text" id="productName" name="productName"><br>
        <label for="productDescription">Description:</label>
        <input type="text" id="productDescription" name="productDescription"><br>
        <label for="productPrice">Price:</label>
        <input type="number" id="productPrice" name="productPrice"><br>
        <button type="submit">Add Product</button>
    </form>
    <p>To modify a product, enter its ID and new details:</p>
    <form action="">
        <label for="productId">Product ID:</label>
        <input type="number" id="productId" name="productId"><br>
        <!-- Fields for new product details -->
        <button type="submit">Modify Product</button>
    </form>
    <p>To delete a product, enter its ID:</p>
    <form action="">
        <label for="productIdDelete">Product ID:</label>
        <input type="number" id="productIdDelete" name="productIdDelete"><br>
        <button type="submit">Delete Product</button>
    </form>
    <p>To display all products:</p>
    <button>Show Products</button>
    <p>Click "Exit" to quit the program.</p>
</body>
</html>
