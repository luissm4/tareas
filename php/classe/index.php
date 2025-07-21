<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Gestión de Usuarios y Mascotas</title>
</head>
<body>
    <h2>Registrar Usuario</h2>
    <form method="post">
        <input type="text" name="nombre" placeholder="Nombre" required><br>
        <input type="text" name="cedula" placeholder="Cédula" required><br>
        <input type="number" name="edad" placeholder="Edad" required><br>
        <button name="agregar_usuario">Agregar Usuario</button>
    </form>
    
    <h2>Registrar Mascota</h2>
    <form method="post">
        <input type="text" name="nombre_mascota" placeholder="Nombre" required><br>
        <input type="text" name="id_mascota" placeholder="ID" required><br>
        <input type="text" name="raza" placeholder="Raza" required><br>
        <button name="agregar_mascota">Agregar Mascota</button>
    </form>
    
    <h2>Usuarios Registrados</h2>
    <table border="1">
        <tr>
            <th>Nombre</th>
            <th>Cédula</th>
            <th>Edad</th>
            <th>Acción</th>
        </tr>
        <?php
        session_start();
        if (!isset($_SESSION["usuarios"])) {
            $_SESSION["usuarios"] = [];
        }
        if (!isset($_SESSION["mascotas"])) {
            $_SESSION["mascotas"] = [];
        }
        if (isset($_POST['agregar_usuario'])) {
            $nombre = $_POST['nombre'];
            $cedula = $_POST['cedula'];
            $edad = $_POST['edad'];
            if ($cedula % 2 == 0) {
                $_SESSION["usuarios"][] = ["nombre" => $nombre, "cedula" => $cedula, "edad" => $edad];
            }
        }
        if (isset($_POST['eliminar_usuario'])) {
            unset($_SESSION["usuarios"][intval($_POST['key'])]);
            $_SESSION["usuarios"] = array_values($_SESSION["usuarios"]);
        }
        usort($_SESSION["usuarios"], function($a, $b) {
            return $b['edad'] - $a['edad'];
        });
        foreach ($_SESSION["usuarios"] as $key => $usuario) {
            echo "<tr><td>{$usuario['nombre']}</td><td>{$usuario['cedula']}</td><td>{$usuario['edad']}</td>
                  <td><form method='post'><input type='hidden' name='key' value='{$key}'><button name='eliminar_usuario'>Eliminar</button></form></td></tr>";
        }
        ?>
    </table>
    
    <h2>Mascotas Registradas</h2>
    <button name="listar_mascotas" formmethod="post">Listar Mascotas</button>
    <?php
    if (isset($_POST['agregar_mascota'])) {
        $nombre = $_POST['nombre_mascota'];
        $id = $_POST['id_mascota'];
        $raza = $_POST['raza'];
        if ($id % 2 != 0) {
            $_SESSION["mascotas"][] = ["nombre" => $nombre, "id" => $id, "raza" => $raza];
        }
    }
    if (isset($_POST['eliminar_mascota'])) {
        unset($_SESSION["mascotas"][intval($_POST['key'])]);
        $_SESSION["mascotas"] = array_values($_SESSION["mascotas"]);
    }
    $razas = [];
    foreach ($_SESSION["mascotas"] as $mascota) {
        $razas[$mascota['raza']][] = $mascota;
    }
    foreach ($razas as $raza => $mascotas) {
        echo "<h3>Raza: $raza</h3><table border='1'><tr><th>Nombre</th><th>ID</th><th>Acción</th></tr>";
        foreach ($mascotas as $key => $mascota) {
            echo "<tr><td>{$mascota['nombre']}</td><td>{$mascota['id']}</td>
                  <td><form method='post'><input type='hidden' name='key' value='{$key}'><button name='eliminar_mascota'>Eliminar</button></form></td></tr>";
        }
        echo "</table>";
    }
    ?>
</body>
</html>
