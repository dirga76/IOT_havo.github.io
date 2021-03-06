char webpage[] PROGMEM = R"=====(
<!doctype html>
<html lang="en">

<!-- Bagian Kepala Website-->

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.1">
    <!-- Penamaan Judul Bar Website-->
    <title>Level Switch IoT</title>
    <!-- Memanggil Style CSS-->
    <link rel="stylesheet" href="style.css">
</head>

<!-- Bagian Body Website-->

<body>
    <!-- Judul Website-->
    <div align='center'>
        <h1>Tampilan Level Switch IoT</h1>
    </div>
    <!-- Tampilan Water Tank-->
    <img id="tank" src="img/Low.png" />

    <!-- Tampilan Gambar Logo HAVO-->
    <img id="logo" src="img/logo.png" style="width:300px;height:200px;" />

    <div class="box">
        <div class="p">Indication Panel</div>
        <!-- Tampilan Box Luar-->
        <div class="outside__box">
            <!-- Tampilan untuk lampu hijau/Running Pump-->
            <div class="light__box">
                <div class="light" id="green"></div>
                <div class="light__top"></div>
                <div class="text-align">RUNNING PUMP</div>
            </div>
            <!-- Tampilan untuk lampu Kuning/High Level-->
            <div class="light__box">
                <div class="light" id="yellow"></div>
                <div class="light__top"></div>
                <div class="text-align1">HIGH LEVEL</div>
            </div>
            <!-- Tampilan untuk lampu Merah/Low Level-->
            <div class="light__box">
                <div class="light" id="red"></div>
                <div class="light__top"></div>
                <div class="text-align2">LOW LEVEL</div>
            </div>
        </div>
    </div>
    <!-- Tampilan untuk border dan bayangan box-->
    <div class="box_border"></div>
    <div class="post "></div>
    <div class="post__shadow"></div>
    <!-- Tampilan kotak Local Control Panel -->
    <div class="box2">
        <div class="p1">Local Control Panel</div>
        <!-- Tampilan menu button-->
        <div class="form-box">
            <!-- Tampilan Switch Button on/off-->
            <div class="button-box">
                <div id="btn"></div>
                <button type="button" class="toggle-btn" onclick="leftClick()">OFF</button>
                <button type="button" class="toggle-btn" onclick="rightClick()">ON</button>
            </div>
            <!-- Tampilan Switch Button Manual/Auoto-->
            <div class="button-box1">
                <div id="btn1"></div>
                <button type="button" class="toggle-btn1" onclick="left()">Manual</button>
                <button type="button" class="toggle-btn1" onclick="right()">Auto</button>
            </div>
        </div>
    </div>

    <!-- Memanggil alamat Js-->
    <script src="script/script.js"></script>

</body>

</html>
)=====";
