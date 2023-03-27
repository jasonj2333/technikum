<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use App\Models\Page;

class PagesController extends Controller
{
    public function index()
    {
        $pages = Page::all();
        //dd($pages);
        return view('pages.index', compact('pages'));
    }

    public function show(string $title)
    {
        return view('pages.show', compact('title'));
    }
}
