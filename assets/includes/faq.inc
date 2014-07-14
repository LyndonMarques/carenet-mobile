<?php
include "open_db.php";
mb_internal_encoding("UTF-8");

$sql            = mysql_query("SELECT * FROM cn_faq_main_topics");
$c              = 0;
$faq_topics     = array();
$faqs           = array();
$faq_topics_ids = array();

while($row = mysql_fetch_array($sql)){
    $faq_topics[] = [
        'id'    => $row['main_topic_id_pk'],
        'topic' => $row['main_topic_pt']
    ];
}

$sql = mysql_query("SELECT * FROM cn_faq");
while($row = mysql_fetch_array($sql)){
    $faqs[] = [
        'id'       => $row['faq_topic_id_fk'],
        'titulo'   => $row['faq_pt'],
        'conteudo' => $row['ans_pt']
    ];
}

?>

  <!-- page wrapper starts -->
  <div class="pageWrapper faqPageWrapper"> 
    
    <!-- page content wrapper starts -->
    <div class="pageContentWrapper"> 
      <!-- page title starts -->
      <h3 class="pageTitle">Perguntas Frequentes</h3>
      <!-- page title ends -->
      <p>Selecione o tópico abaixo e veja as perguntas frequentes associadas.</p>
      <label for="topics"></label>
      <select id="topics" onchange="" style="width: 100%">
          <?php foreach($faq_topics as $topic) { ?>
              <option value="<?= $c ?>"><?= $topic['topic'] ?></option>
            <?php $faq_topics_ids[] = "\$('#ctopic".$topic['id']."')"; ?>
            <?php $c++; ?>
          <?php } ?>
      </select>

      <div class="textBreak"></div>
      <!-- faqs start --> 
      <!-- accordion wrapper starts -->

      <?php foreach($faq_topics as $topic) { ?>
            <div class="accordionWrapper" id="ctopic<?= $topic['id'] ?>" style="display: none">
                <!-- accordion items wrapper starts -->
                <?php foreach($faqs as $fac){
                    if($topic['id'] == $fac['id']) { ?>
                <div class="accordionItemWrapper"> <a href="" class="accordionButton"><span class="accordionButtonIcon"></span><p class="accordionButtonTitle"><?= $fac['titulo'] ?></p></a>
                    <div class="accordionContentWrapper">
                        <div class="accordionContent">
                            <p><?= $fac['conteudo'] ?></p>
                        </div>
                    </div>
                </div>
                    <?php } ?>
                <?php } ?>
             </div>
                <!-- accordion items wrapper ends -->
      <?php } ?>
      <!-- accordion wrapper ends --> 
      <!-- faqs end -->
      <div class="pageBreakBoth"></div>
    </div>
    <!-- page content wrapper ends --> 
    
  </div>
  <!-- page wrapper ends -->


<script type='text/javascript'>

    var topics = [];

    function showTopic(idx) {
        for (var i = 0; i < topics.length; i++) {
            topics[i].hide();
        }
        topics[idx].show();
    }

    $( document ).ready(function() {
        topics = [<?= implode(',', $faq_topics_ids)?>];
        var cmbTopics = $('#topics');
        cmbTopics.change(function() {
            showTopic($(this).val());
        });
        cmbTopics.trigger("change");
    });

</script>
