<?php
//Send Us An Email
// Your message was received!
// Your message was successfully submitted to us, and we will contact you as soon as possible.
// Name
// Message
// Your name is required.
// Invalid email address.
// A message is required.
?>

  <!-- page wrapper starts -->
  <div class="pageWrapper contactPageWrapper"> 
    
    <!-- contact form wrapper starts -->
    <div class="contactFormWrapper">
      <h4 class="contactTitle">Envie uma mensagem para a Carenet:</h4>
      <!-- form success message wrapper starts -->
      <div class="formSuccessMessageWrapper" id="formSuccessMessageWrapper">
        <h4>Sua mensagem foi recebida!</h4>
        <p>Sua mensagem foi submetida com sucesso para nós e vamos contactar você o mais rápido possível.</p>
      </div>
      <!-- form success message wrapper ends --> 
      <!-- contact form starts -->
      <form action="/contact/submit.php" method="post" class="contactForm" id="contactForm">
        <fieldset>
          <div class="formFieldWrapper">
            <label for="contactNameField">Nome:</label>
            <input type="text" name="contactNameField" value="" class="contactField requiredField" id="contactNameField" data-placeholder=""/>
          </div>
          <div class="formFieldWrapper">
            <label for="contactEmailField">Email:</label>
            <input type="text" name="contactEmailField" value="" class="contactField requiredField requiredEmailField" id="contactEmailField" data-placeholder=""/>
          </div>
          <div class="formTextareaWrapper">
            <label for="contactMessageTextarea">Mensagem:</label>
            <textarea name="contactMessageTextarea" class="contactTextarea requiredField" id="contactMessageTextarea" data-placeholder=""></textarea>
          </div>
          <div class="formSubmitButtonErrorsWrapper"> 
            <!-- form errors start --> 
            <span class="formValidationError" id="contactNameFieldError">Seu nome é requerido.</span> <span class="formValidationError" id="contactEmailFieldError">Seu email é requerido.</span> <span class="formValidationError" id="contactEmailFieldError2">Email inválido.</span> <span class="formValidationError" id="contactMessageTextareaError">Uma mensagem é requerida.</span>
            <!-- form errors end -->
            <input type="submit" class="buttonWrapper contactSubmitButton" id="contactSubmitButton" value="Enviar" data-form-id="contactForm"/>
          </div>
          <input type="hidden" name="formIsReady" value="true"  id="formIsReady" />
        </fieldset>
      </form>
      <!-- contact form ends --> 
    </div>
    <!-- contact form wrapper ends --> 
    
  </div>
  <!-- page wrapper ends --> 
