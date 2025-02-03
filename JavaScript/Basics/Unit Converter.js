// Function to convert miles to kilometers
function convert() {
    // Get the value from the input field
    var miles = document.getElementById("miles").value;
    
    // Convert miles to kilometers
    var kilometers = miles * 1.60934;
    
    window.alert(`${miles} miles is equal to ${kilometers.toFixed(2)} kilometers`);
}