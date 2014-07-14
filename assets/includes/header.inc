<?php
global $template;

//Detect special conditions devices
$iPod    = stripos($_SERVER['HTTP_USER_AGENT'],"iPod");
$iPhone  = stripos($_SERVER['HTTP_USER_AGENT'],"iPhone");
$iPad    = stripos($_SERVER['HTTP_USER_AGENT'],"iPad");
$Android = stripos($_SERVER['HTTP_USER_AGENT'],"Android");
$webOS   = stripos($_SERVER['HTTP_USER_AGENT'],"webOS");

$params = array();

//do something with this information
if( $iPod || $iPhone ){
    $params['include_safari_banner'] = 1;
    //browser reported as an iPhone/iPod touch -- do something here

}else if($iPad){
    //browser reported as an iPad -- do something here
    echo "<style>
        .websiteWrapper{
            height: 12%;
        }
        .mainLogo{
            height: 180%;
        }
    </style>";
}else if($Android){
    //browser reported as an Android device -- do something here
    echo "<style>
        .websiteWrapper{
            height: 12%;
        }
        .mainLogo{
            height: 180%;
        }
    </style>";
}else if($webOS){
    //browser reported as a webOS device -- do something here
}

?>
<!DOCTYPE html>
<html>
<head>
    <title><?= $template['title'] ?></title>
    <!-- meta tags start -->
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    <meta name="description" content="<?= $template['description'] ?>">
    <meta name="keywords" content="<?= $template['keywords'] ?>">
    <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no" />
    <meta name="robots" content="index, follow">
    <meta name="revisit-after" content="7 day">
    <meta name="language" content="Portuguese">
    <meta name="generator" content="N/A">
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<?php if (array_key_exists('include_safari_banner',$params)) { ?>
    <meta name="apple-itunes-app" content="app-id=863030381, affiliate-data=, app-argument=none">
<?php } ?>

    <!-- meta tags end -->

    <!-- favorite icon starts -->
    <link rel="shortcut icon" href="/assets/img-custom/favicon.ico" type="image/x-icon" />
    <!-- favorite icon ends -->

    <!-- CSS files start -->
    <link href="/assets/css/framework.css" rel="stylesheet" type="text/css" media="all" />
    <link href="/assets/css/colorbox.css" rel="stylesheet" type="text/css" media="all" />
    <link href="/assets/css/elements.css" rel="stylesheet" type="text/css" media="all" />
    <link href="/assets/css/style.css" rel="stylesheet" type="text/css" media="all" />
    <link href="/assets/css/responsive.css" rel="stylesheet" type="text/css" media="screen" />
    <link href="/assets/css/hidpi.css" rel="stylesheet" type="text/css" media="screen" />
    <link href="/assets/css/carenet.css" rel="stylesheet" type="text/css" media="all" />
    <?php foreach($template['css'] as $css): ?>
        <link rel="stylesheet" href="/assets/css/<?= $css ?>.css">
    <?php endforeach; ?>
    <!-- CSS files end -->

    <!-- JavaScript files start -->
    <script type="text/javascript" src="/assets/js/jquery.min.js"></script>
    <script type="text/javascript" src="/assets/js/effects.jquery-ui.min.js"></script>
    <script type="text/javascript" src="/assets/js/jquery.nivo-slider.min.js"></script>
    <script type="text/javascript" src="/assets/js/jquery.colorbox.min.js"></script>
<?php if (in_array("contact.js",$template['features'])) { ?>
        <script type="text/javascript" src="/assets/js/contact.js"></script>
<?php } ?>
    <script type="text/javascript" src="/assets/js/custom.js"></script>
    <!-- JavaScript files end -->
</head>
<?php if ($template['body_class'] != null) { ?>
<body class="<?= $template['body_class'] ?>">
<?php } else {?>
<body>
<?php } ?>
<!-- website wrapper starts -->

<?php if (in_array("install-app2",$template['features'])) { ?>
    <!-- notification starts -->
    <p class="topNotification"><span>Instale o nosso applicativo!</span><a href="" class="notificationButton"></a></p>
    <!-- notification ends -->
<?php } ?>


<div class="websiteWrapper">

    <div class="mainLogo">
        <a href="/"><img src="/assets/img-custom/logo.png" alt=""/></a>
    </div>

    <!-- header wrapper starts -->
    <div class="headerOuterWrapper">
        <div class="headerWrapper">
            <a href="" class="mainMenuButton"></a>
            <div class="halfLogo">
                <img src="/assets/img-custom/logo-spacer-a.png" alt=""/>
            </div>
        </div>

        <!-- main menu wrapper starts -->
        <div class="mainMenuWrapper">
            <div class="halfLogo">
                <img src="/assets/img-custom/logo-spacer-b.png" alt=""/>
            </div>
            <ul>
                <li <?= $template['menu_item'] == 'home'? "class=\"currentPage\"" : "" ?>><a href="/">Home</a></li>
                <li <?= $template['menu_item'] == 'carenet'? "class=\"currentPage\"" : "" ?>>  <a href="/carenet">Carenet</a></li>
                <li <?= $template['menu_item'] == 'app'? "class=\"currentPage\"" : "" ?>><a href="/app">App</a></li>
                <li <?= $template['menu_item'] == 'klip'? "class=\"currentPage\"" : "" ?>><a href="/klip">Klip</a></li>
                <li <?= $template['menu_item'] == 'faq'? "class=\"currentPage\"" : "" ?>><a href="/perguntas-frequentes">Perguntas Frequentes</a></li>
                <li <?= $template['menu_item'] == 'conditions'? "class=\"currentPage\"" : "" ?>><a href="/condicoes">Condições de Uso</a></li>
                <li <?= $template['menu_item'] == 'contact'? "class=\"currentPage\"" : "" ?>><a href="/contato">Entre em Contato!</a></li>
            </ul>
        </div>
        <!-- main menu wrapper ends -->

    </div>
    <!-- header wrapper ends -->
