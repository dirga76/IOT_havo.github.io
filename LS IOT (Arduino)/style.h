/* Pengaturan Body Website*/
char webpage[] PROGMEM = R"=====(
body {
    font-family: "Open Sans", sans-serif;
    color: #140a0a;
    background-image: url(img/background.png);
    background-size: cover;
    background-repeat: no-repeat;
    background-position: center;
    background-attachment: fixed;
    height: 100%;
}


/* Logo HAVO*/

#logo {
    left: 48%;
    top: 34vh;
    position: absolute;
    background-color: transparent;
}


/* Pengaturan Tampilan Water Tank*/

#tank {
    width: 640px;
    height: 570px;
    left: 4%;
    top: 8vh;
    position: absolute;
    background-color: transparent;
}


/* Pengaturan Kotak Indication Panel*/

.box {
    text-align: justify;
    height: 40vh;
    width: 20vw;
    left: 75%;
    top: 8vh;
    position: absolute;
    border: solid 6px black;
    display: flex;
    flex-direction: column;
    justify-content: space-between;
    background-color: transparent;
}

.box .p {
    font-size: 20px;
    text-align: center;
    color: #0a0a0a;
}

.box2 .p1 {
    margin-top: 20px;
    font-size: 20px;
    text-align: center;
    color: #0a0a0a;
}


/* Pengaturan box luar*/

.outside__box {
    height: 30vh;
    width: 5vw;
    position: absolute;
    top: 7vh;
    left: 20%;
    transform: translateX(-50%);
    background-color: #3d405b;
    border: solid 3px black;
    box-shadow: 0px 0px 20px 3px black inset;
    z-index: 99;
    display: flex;
    flex-direction: column;
    justify-content: space-between;
    -webkit-transform: translateX(-50%);
    -moz-transform: translateX(-50%);
    -ms-transform: translateX(-50%);
    -o-transform: translateX(-50%);
}


/* Pengaturan box untuk indikator lampu*/

.light__box {
    height: 33%;
    width: auto;
    margin: 3px;
    background-color: #3d405b;
    border: solid 3px black;
    box-shadow: 0px 0px 20px 3px black inset;
    display: flex;
    justify-content: center;
    align-items: center;
    position: relative;
}


/* Pengaturan untuk posisi lampu*/

.light {
    width: 70%;
    height: 70%;
    border-radius: 50%;
    z-index: 77;
    -webkit-border-radius: 50%;
    -moz-border-radius: 50%;
    -ms-border-radius: 50%;
    -o-border-radius: 50%;
}


/* Pengaturan text runnning pump*/

.text-align {
    text-align: center;
    padding: 10px;
    width: 270px;
    position: absolute;
    left: 5%;
    display: flex;
    flex-direction: column;
    justify-content: space-between;
    background-color: transparent;
}


/* Pengaturan text high level*/

.text-align1 {
    text-align: center;
    padding: 10px;
    width: 270px;
    position: absolute;
    left: 5%;
    display: flex;
    flex-direction: column;
    justify-content: space-between;
    background-color: transparent;
}


/* Pengaturan text low level*/

.text-align2 {
    text-align: center;
    padding: 10px;
    width: 270px;
    position: absolute;
    left: 5%;
    display: flex;
    flex-direction: column-reverse;
    justify-content: space-between;
    background-color: transparent;
}


/* Pengaturan warna lampu running pump*/

#green {
    background-color: #6a994e;
    box-shadow: 0px 0px 15px 8px #52796f inset;
}


/* Pengaturan warna lampu high level*/

#yellow {
    background-color: #fdc500;
    box-shadow: 0px 0px 15px 8px #e09f3e inset;
}


/* Pengaturan warna lampu low level*/

#red {
    background-color: #ba181b;
    box-shadow: 0px 0px 15px 8px #660708 inset;
}


/* Pengaturan warna lampu hijau ketika on*/

#green.light.active {
    background-color: #7ae582;
    box-shadow: 0px 0px 15px 8px #7ae582;
}


/* Pengaturan warna lampu kuning ketika on*/

#yellow.light.active {
    background-color: #ffe66d;
    box-shadow: 0px 0px 15px 8px #ffe66d;
}


/* Pengaturan warna lampu merah ketika on*/

#red.light.active {
    background-color: #ef233c;
    box-shadow: 0px 0px 15px 8px #ef233c;
}


/* Pengaturan box untuk local control panel */

.box2 {
    text-align: center;
    height: 34vh;
    width: 20vw;
    left: 75%;
    top: 55vh;
    position: absolute;
    border: solid 6px black;
    display: flex;
    flex-direction: column;
    justify-content: space-between;
}


/* Pengaturan button on off*/

.button-box {
    width: 220px;
    margin: 35px auto;
    top: 110px;
    left: 25px;
    position: absolute;
    border-radius: 30px;
    border: solid 3px black;
    background: #fff;
}


/* Pengaturan posisi button on off*/

.toggle-btn {
    padding: 10px 40px;
    cursor: pointer;
    background: transparent;
    border: 0;
    outline: none;
    position: relative;
    text-align: center;
}


/* Pengaturan warna untuk switch button on off*/

#btn {
    left: 0;
    top: 0;
    position: absolute;
    width: 108px;
    height: 100%;
    background: #0a91df;
    border-radius: 30px;
}


/* Pengaturan button manual auto*/

.button-box1 {
    width: 220px;
    margin: 35px auto;
    left: 25px;
    top: 40px;
    position: absolute;
    border-radius: 30px;
    border: solid 3px black;
    background: #fff;
}


/* Pengaturan posisi button manual auto*/

.toggle-btn1 {
    padding: 10px 30px;
    cursor: pointer;
    background: transparent;
    border: 0;
    outline: none;
    position: relative;
    text-align: center;
}


/* Pengaturan warna untuk switch button manula auto*/

#btn1 {
    left: 0;
    top: 0;
    position: absolute;
    width: 108px;
    height: 100%;
    background: #0a91df;
    border-radius: 30px;
    transition: .5s;
}
)=====";