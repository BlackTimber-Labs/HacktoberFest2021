(function() {
    "use strict"; // Start of use strict
  
    var scrollToTop = document.querySelector('.scroll-to-top');
    
    if (scrollToTop) {
      
      // Scroll to top button appear
      window.addEventListener('scroll', function() {
        var scrollDistance = window.pageYOffset;
  
        if (scrollDistance > 100) {
          scrollToTop.style.display = 'block';
        } else {
          scrollToTop.style.display = 'none';
        }
      });
    }
  
  
  })(); 