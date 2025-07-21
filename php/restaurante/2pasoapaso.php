<!DOCTYPE html>
<html>
<head>
    <title>El Cañaguatero restaurant</title>
</head> 
    <h1>EL CAÑAGUATERO</h1>
    <h2>¡BIENVENIDO! </h2>

<!-- FORMULARIO PARA CREAR UN NUEVO PEDIDO -->
    <h2>Crea tu Pedido</h2>
    <form method="post" enctype="multipart/form-data">

<!-- Campo para número único de pedido -->
    Número de pedido: <input type="text" name="numero" placeholder="No." ><br>
<!-- Campo para cédula del cliente -->
    Cedula del cliente: <input type="text" name="cedula" placeholder="C.c." ><br>
<!-- Campo para cantidad de tacos -->
    Tacos al pastor $2000: <input type="number" name="tacos" placeholder="Cuantos quiere"><br>
<!-- Campo para cantidad de aguas -->
    Agua de jamaica $6000: <input type="number" name="aguas" placeholder="Cuantos quiere"><br>
<!-- Imagen obligatoria del cliente o firma -->
    Agrega una foto o firma: <input type="file" name="imagen"><br>
<!-- Botón para agregar el pedido -->
    <button name="add">LISTO</button>
    </form>

<!-- FORMULARIO PARA FILTRAR POR VALOR -->
<h2>¿Que pedido desea ver?</h2>
    <form method="post">
<input type="number" name="valor_filtro" placeholder="Agregue el total">
        <button name="filtrar">Ver pedido</button>
    </form>
<!-- BOTÓN PARA ORDENAR PEDIDOS DE MENOR A MAYOR -->
    <form method="post">
        <button name="ordenar">Ordenar de menor a mayor</button>
    </form>
</body>
</html>

<?php
// INICIAR SESIÓN
session_start();

// SI NO EXISTE EL ARRAY DE PEDIDOS, LO CREAMOS
if (!isset($_SESSION['pedidos'])) {
    $_SESSION['pedidos'] = [];
}

// VERIFICAMOS SI SE PRESIONÓ EL BOTÓN "add" PARA CREAR PEDIDO Y SE ENVIÓ UNA IMAGEN
if (isset($_POST['add']) && $_FILES['imagen']) {

// OBTENEMOS LOS DATOS DEL FORMULARIO
    $numero = $_POST['numero'];
    $cedula = $_POST['cedula'];
    $tacos = $_POST['tacos'];
    $aguas = $_POST['aguas'];

// VALIDAMOS QUE NO SE REPITA EL NÚMERO DE PEDIDO
    foreach ($_SESSION['pedidos'] as $pedido) {
    if ($pedido['numero'] == $numero) {
    echo "<p style='color:red'>Error: Ya existe un pedido con ese número.</p>";
        exit();
        }
    } 

// CALCULAMOS EL TOTAL DEL PEDIDO    
    $total = $tacos * 2000 + $aguas * 6000;

// GUARDAMOS LA IMAGEN EN LA CARPETA ACTUAL    
    $ruta_temp = $_FILES['imagen']['tmp_name'];
    $nombre_img = $_FILES['imagen']['name'];
    move_uploaded_file($ruta_temp, $nombre_img);

// AGREGAMOS EL PEDIDO AL ARRAY DE SESIÓN    
    $_SESSION['pedidos'][] = [
        'numero' => $numero,
        'cedula' => $cedula,
        'tacos' => $tacos,
        'aguas' => $aguas,
        'total' => $total,
        'imagen' => $nombre_img
    ];
}

// ELIMINAR UN PEDIDO
if (isset($_POST['eliminar'])) {
    unset($_SESSION['pedidos'][$_POST['key']]);// eliminamos el pedido
    $_SESSION['pedidos'] = array_values($_SESSION['pedidos']);// reorganizamos los índices
}

// MOSTRAMOS TODOS LOS PEDIDOS POR DEFECTO
$mostrar_pedidos = $_SESSION['pedidos'];

// FILTRAR PEDIDOS POR VALOR TOTAL
if (isset($_POST['filtrar'])) {
    $valor_filtro = $_POST['valor_filtro'];
    $mostrar_pedidos = array_filter($_SESSION['pedidos'], function($pedido) use ($valor_filtro) {
        return $pedido['total'] == $valor_filtro;
    });
}

// ORDENAR DE MENOR A MAYOR POR VALOR TOTAL
if (isset($_POST['ordenar'])) {
    usort($mostrar_pedidos, function($a, $b) {
        return $a['total'] - $b['total'];
    });
}

// MOSTRAR CADA PEDIDO EN SU PROPIA TABLA
foreach ($mostrar_pedidos as $key => $pedido) {
    echo "<hr>";
    echo "<form method='post'>";
    echo "<table border='1' style='margin-bottom:10px'>";
    echo "<tr><td>Número de pedido:</td><td>{$pedido['numero']}</td></tr>";
    echo "<tr><td>Cédula:</td><td>{$pedido['cedula']}</td></tr>";
    echo "<tr><td>Tacos al pastor:</td><td>{$pedido['tacos']}</td></tr>";
    echo "<tr><td>Agua de jamaica:</td><td>{$pedido['aguas']}</td></tr>";
    echo "<tr><td>Total:</td><td>{$pedido['total']}</td></tr>";
    echo "<tr><td>Imagen:</td><td><img src='{$pedido['imagen']}' width='100'></td></tr>";
    echo "</table>";
    // BOTÓN PARA ELIMINAR EL PEDIDO
    echo "<input type='hidden' name='key' value='$key'>";
    echo "<button name='eliminar'>Eliminar</button>";
    echo "</form>";
}
?>