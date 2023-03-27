<?php

use Illuminate\Support\Facades\Route;
//use App\Http\Controllers\PageController;

/*
|--------------------------------------------------------------------------
| Web Routes
|--------------------------------------------------------------------------
|
| Here is where you can register web routes for your application. These
| routes are loaded by the RouteServiceProvider and all of them will
| be assigned to the "web" middleware group. Make something great!
|
*/

Route::get('/', function () {
    //return view('welcome');
    return view('start');
});

// Route::get('/strony', [App\Http\Controllers\PageController::class, 'index']);
// Route::get('/strony/{title?}', [PageController::class, 'show']);
Route::get('/strony/{title?}', function (string $title="główna") {
    echo "<h1>Strona $title</h1>";
})->where('title', '[A-Za-z]+');
